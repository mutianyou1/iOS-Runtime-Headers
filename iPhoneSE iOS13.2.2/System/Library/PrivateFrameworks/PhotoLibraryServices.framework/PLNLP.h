/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLNLP : NSObject
+(id)lemmasForToken:(id)arg1 locale:(id)arg2 options:(long long)arg3 ;
+(id)tokensFromString:(id)arg1 options:(long long)arg2 ;
+(id)stringWithoutDiacriticsFromString:(id)arg1 ;
+(id)ngramsFromTokens:(id)arg1 ofSize:(unsigned long long)arg2 usingSeparator:(id)arg3 ;
+(id)dateIntervalsFromMessage:(id)arg1 onDate:(id)arg2 ;
+(id)dateFilterForCMMWithAttributes:(id)arg1 withReferenceDate:(id)arg2 ;
+(id)stopWordsForLanguageCode:(id)arg1 ;
+(id)_englishStopWords;
+(id)_frenchStopWords;
+(BOOL)nlpSearchSupportsLocale:(id)arg1 ;
@end
