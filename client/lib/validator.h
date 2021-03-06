#ifndef _VALIDATOR_H__
#define _VALIDATOR_H__ 

/**
 * Library for validation functions
 */

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <regex.h>
#include <netdb.h>

bool validate_name(const char *name);
bool validate_email(const char *email);
bool validate_site(const char *site);
bool validate_number(const char *number);
bool validate_dob(const char *dob);
bool validate_pincode(const char *pincode);

#endif