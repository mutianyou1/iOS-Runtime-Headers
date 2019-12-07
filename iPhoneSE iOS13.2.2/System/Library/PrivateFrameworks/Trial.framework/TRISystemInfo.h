/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TRISystemInfo : NSObject <NSSecureCoding> {

	BOOL _isBetaUser;

}

@property (assign) BOOL isBetaUser;              //@synthesize isBetaUser=_isBetaUser - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)info;
+(id)loadSystemInfo;
+(id)createSystemInfo;
+(id)systemInfoFromFile:(id)arg1 ;
+(BOOL)_sysIsBetaUser;
+(BOOL)_sysIsProfileInstalledWithIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)save;
-(BOOL)saveToFile:(id)arg1 ;
-(id)initFromSystem;
-(BOOL)isBetaUser;
-(void)setIsBetaUser:(BOOL)arg1 ;
@end
