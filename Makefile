.PHONY: all clean export
SRC=$(wildcard *.tex)

all: $(SRC)
	$(foreach var,$^,pdflatex -shell-escape $(var);)
	@echo -e "\033[0;33mWarning! You may need to rerun this target to avoid some errors (such as broken Table of Contents)\033[0m"

clean:
	@find -type f | git check-ignore --stdin | xargs rm

export:
	@git archive --format=tar.gz --prefix=ACOS_Seminars/ HEAD >export.tar.gz
