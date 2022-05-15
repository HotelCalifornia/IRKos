.PHONY:         clean
all:            ../build

build/$(PROJECT).elf: $(SOURCES)
	$(CC) $(CFLAGS) $(LDFLAGS) -o build/$(PROJECT).elf $(addprefix -I,$(INCLUDE)) $(SOURCES)
	$(OBJDUMP) -dt build/$(PROJECT).elf > build/$(PROJECT).lst

#qemu:           build/$(PROJECT).elf
#	$(QEMU_SYSTEM) -m $(MEMORY) -nographic -machine $(MACHINE) $(QEMU_DEBUG_OPTIONS) -cpu $(CPU) -kernel build/$(PROJECT).elf

clean:
	rm -f build/$(PROJECT).elf build/$(PROJECT).lst
