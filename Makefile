SHELL := /usr/bin/env bash

GENERATED_FILES = \
  yak87/matrix.png

.PHONY: all
all: $(GENERATED_FILES)

%.png: %.txt
	@MAVEN_OPTS=-Djava.aws.headless=true ditaa --overwrite --round-corners $^ $@

.PHONY: clean
clean:
	@rm -f $(GENERATED_FILES)
