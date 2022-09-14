#ifndef CODE_REVIEW_BASE64_H
#define CODE_REVIEW_BASE64_H

/* base64 encode function */
char *base64_encode(const void *data, int size);

/* base64 decode function */
char *base64_decode(const char *str);

#endif /* CODE_REVIEW_BASE64_H */

#ifndef CODE_REVIEW_UU_H
#define CODE_REVIEW_UU_H

/* uuencode functions */
void encode (FILE *fp);

/* uudecode functions */
int decode (char *filename, FILE *fpin);

#endif /* CODE_REVIEW_UU_H */
