#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc == 0) {
		printf("input file necessary.\n");
		return 1;
	}
	FILE *fp = fopen(argv[1], "r");
	if (fp == NULL) {
		printf("File open failed.\n");
		return 1;
	}
}