/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SPMatcher : NSObject {

	void* _matcher;

}
+(id)transcriptionForString:(id)arg1 withLanguage:(id)arg2 ;
-(void)dealloc;
-(BOOL)matches:(id)arg1 ;
-(BOOL)matchesUTF8String:(const char*)arg1 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(unsigned long long)arg3 ;
-(unsigned long long)wordCount;
-(BOOL)matches:(id)arg1 outMatchBits:(unsigned long long*)arg2 ;
-(BOOL)matchesUTF8String:(const char*)arg1 outMatchBits:(unsigned long long*)arg2 ;
@end
