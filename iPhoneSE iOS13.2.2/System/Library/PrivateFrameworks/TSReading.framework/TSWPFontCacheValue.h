/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPFontCacheValue : NSObject {

	CTFontRef _ctFont;

}

@property (nonatomic,readonly) CTFontRef ctFont;              //@synthesize ctFont=_ctFont - In the implementation block
+(id)cacheValueWithCTFont:(CTFontRef)arg1 ;
-(void)dealloc;
-(CTFontRef)ctFont;
-(id)initWithCTFont:(CTFontRef)arg1 ;
@end
