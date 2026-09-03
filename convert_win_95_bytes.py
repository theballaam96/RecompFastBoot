byte_pack = []
with open("Windows 95 Startup by Bismuth (REV 1).bin", "rb") as fh:
    with open("bytes.txt", "w") as fg:
        byte_str = ""
        for x in range(0x3C0):
            val = int.from_bytes(fh.read(1), "big")
            val_str = hex(val)
            if len(val_str) == 3:
                val_str = f"0x0{val_str[2]}"
            if (x & 3) > 0:
                val_str = val_str[2:]
            byte_str += val_str
            if (x & 3) == 3:
                fg.write(f"{byte_str}, ")
                if (x & 7) == 7:
                    fg.write("\n")
                byte_str = ""
        