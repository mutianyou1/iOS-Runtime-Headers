/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNMonogrammer;

@interface HRMonogrammer : NSObject {

	CNMonogrammer* _monogrammer;

}

@property (nonatomic,retain) CNMonogrammer * monogrammer;              //@synthesize monogrammer=_monogrammer - In the implementation block
-(CNMonogrammer *)monogrammer;
-(void)setMonogrammer:(CNMonogrammer *)arg1 ;
-(id)initWithDiameter:(double)arg1 ;
-(id)makeImageForTitle:(id)arg1 ;
@end
