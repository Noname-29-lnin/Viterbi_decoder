# Configuration
TOPMODULE := tb_viterbi
VERILATOR_FLAGS := --binary --timing --trace --build -f flist.f
WARNING_IGNORE := -Wno-fatal -Wno-lint -Wno-style -Wno-width

# Targets
all: clean compile run

compile:
	@echo "-> Compiling design with Verilator (ignoring warnings)..."
	@verilator $(VERILATOR_FLAGS) $(WARNING_IGNORE)

run:
	@echo "-> Running simulation..."
	@./obj_dir/V$(TOPMODULE) | tee simulation.log
	@echo "Simulation completed. Log saved to simulation.log"

sim:
	@echo "-> Opening waveform viewer..."
	@gtkwave $(TOPMODULE).vcd

clean:
	@echo "-> Cleaning project..."
	@rm -rf *.vcd obj_dir *.log *.dmp

help:
	@echo "Makefile targets:"
	@echo "  all      : Clean, compile and run (default)"
	@echo "  compile  : Compile the design with Verilator"
	@echo "  run      : Run the simulation"
	@echo "  sim      : Open waveform viewer"
	@echo "  clean    : Remove generated files"
	@echo "  help     : Show this help message"

.PHONY: all compile run sim clean help
