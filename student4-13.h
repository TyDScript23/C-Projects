#pragma once

struct address
{
	char street[30];
	char city[30];
	char state[2];
	int zip;
};

struct student	// defining a student structure
{
	char first[12];
	char last[20];
	address home;
	int year;
};
