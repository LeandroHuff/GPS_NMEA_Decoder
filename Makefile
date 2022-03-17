.PHONY: clean All

All:
	@echo "----------Building project:[ NMEADecoder - Debug ]----------"
	@cd "NMEADecoder" && "$(MAKE)" -f  "NMEADecoder.mk"
clean:
	@echo "----------Cleaning project:[ NMEADecoder - Debug ]----------"
	@cd "NMEADecoder" && "$(MAKE)" -f  "NMEADecoder.mk" clean
