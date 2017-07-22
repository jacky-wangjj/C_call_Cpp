#ifndef __APPLE_WRAPPER_H__
#define __APPLE_WRAPPER_H__

struct tagApple;
#ifdef __cplusplus
extern "C" {
#endif
struct tagApple *GetInstance(void);
void ReleaseInstance(struct tagApple **ppInstance);
extern void SetColor(struct tagApple *pApple, int color);
extern int GetColor(struct tagApple *pApple);
#ifdef __cplusplus
};
#endif
#endif
