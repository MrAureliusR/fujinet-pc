#ifdef BUILD_ATARI
#ifndef RECITER_C
#define RECITER_C

#ifdef __cplusplus
extern "C"
{
#endif

    //int TextToPhonemes(char *input, char *output);

    int TextToPhonemes(unsigned char *input);

#ifdef __cplusplus
}
#endif

#endif
#endif /* BUILD_ATARI */