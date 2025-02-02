echo "clean outputs..."
if (Test-Path "./out/") {
    rm -r ./out/
}
$null = mkdir ./out/

$main = "main.c"
$hex = "./out/main.hex"
$bin = "./out/main.bin"

$iram = 256
$xram = 0x0400          # 1KB减去下面的偏移
$code = 0x3800
$xram_start = 0x0000    # 这里要看usb.c内的DMA缓冲区结束地址

$sources = ls *.c
if ($sources -ne $null) {
    echo "compiling sources..."
    foreach ($s in $sources) {
        if ($s -match $main) {
            continue
        }
        echo "CC: $s"
        sdcc --std-c11 -mmcs51 --opt-code-size --model-large --iram-size $iram --xram-size $xram --code-size $code --xram-loc $xram_start -c $s -o ./out/
    }
    
    $objs = ls ./out/*.rel
    if ($objs -ne $null) {
        echo "linking objects..."
        sdcc --std-c11 -mmcs51 --opt-code-size --model-large --iram-size $iram --xram-size $xram --code-size $code --xram-loc $xram_start $main $objs -o $hex
        echo "making binary..."
        makebin $hex $bin

        echo "hex file at: $hex"
        echo "bin file at: $bin"
    }
}
