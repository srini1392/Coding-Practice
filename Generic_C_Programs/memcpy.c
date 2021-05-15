

void memcpy(void *src, void *dst, size_t n){
	char *csrc =(char *)src;
	char *cdst =(char *)dst;
	
	for(int i=0; i<n ;i++){
		cdst[i] = csrc[i];
}