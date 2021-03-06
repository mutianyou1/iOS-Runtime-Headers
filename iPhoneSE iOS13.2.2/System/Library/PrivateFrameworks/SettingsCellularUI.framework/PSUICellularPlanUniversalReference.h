/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SettingsCellularUI/SettingsCellularUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface PSUICellularPlanUniversalReference : NSObject <NSCopying, NSCoding> {

	NSString* _iccid;

}

@property (nonatomic,retain) NSString * iccid;              //@synthesize iccid=_iccid - In the implementation block
+(id)referenceFromCellularPlanPendingTransfer:(id)arg1 ;
+(id)referenceFromPlanItem:(id)arg1 ;
+(id)referenceFromDanglingPlanItem:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)iccid;
-(void)setIccid:(NSString *)arg1 ;
-(id)initWithIccid:(id)arg1 ;
@end

