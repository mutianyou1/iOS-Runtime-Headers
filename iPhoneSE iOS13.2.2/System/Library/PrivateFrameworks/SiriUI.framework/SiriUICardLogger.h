/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateFormatter;

@interface SiriUICardLogger : NSObject {

	NSDateFormatter* _dateFormatter;

}
+(id)_sharedInstance;
+(id)logCardData:(id)arg1 format:(unsigned long long)arg2 ;
+(id)logCard:(id)arg1 format:(unsigned long long)arg2 ;
+(id)logCardData:(id)arg1 ;
+(id)logCard:(id)arg1 ;
-(id)init;
-(id)_dateFormatter;
-(id)_nowString;
-(id)_currentFilenameForFormat:(unsigned long long)arg1 ;
@end
