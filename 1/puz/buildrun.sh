#!/bin/bash

for f in *; do
    if [[ "$f" == *.cpp ]]; then
	clang++ "$f" -o "${f%.*}.o"
	printf "Build:  %s\n" "$f"
    fi
done

for f in *; do
  if [ -f "$f" ] && [ -x "$f" ]; then
      printf "Run: %s\n" "$f"
      ./"$f"
  fi
done
