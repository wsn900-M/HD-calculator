
# ================================================
#   NovaLauncher v0.5 — PS2 Makefile
#   Requires PS2DEV toolchain / PS2SDK
# ================================================

EE_BIN = novalauncher.elf

EE_OBJS = \
	src/main.o \
	src/input/controller.o \
	src/ui/renderer.o \
	src/database/game_db.o \
	src/launcher/game_launcher.o

EE_LIBS = -lpad -lpatches

EE_CFLAGS = -Wall -O2 -G0

all: $(EE_BIN)

clean:
	rm -f $(EE_BIN) $(EE_OBJS)

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal
