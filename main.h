/* base64 encode function */
char *base64_encode(const void *data, int size);

/* base64 decode function */
char *base64_decode(const char *str);

/* uuencode functions */
void encode (FILE *fp);

/* uudecode functions */
int decode (char *filename, FILE *fpin);


