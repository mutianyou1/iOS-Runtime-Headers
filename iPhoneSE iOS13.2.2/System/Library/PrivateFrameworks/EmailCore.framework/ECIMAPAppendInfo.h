/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ECIMAPAppendInfo : NSObject {

	unsigned _uidValidity;
	unsigned long long _newMessageUID;

}

@property (assign,nonatomic) unsigned uidValidity;                          //@synthesize uidValidity=_uidValidity - In the implementation block
@property (assign,nonatomic) unsigned long long newMessageUID;              //@synthesize newMessageUID=_newMessageUID - In the implementation block
-(unsigned)uidValidity;
-(void)setUidValidity:(unsigned)arg1 ;
-(unsigned long long)newMessageUID;
-(void)setNewMessageUID:(unsigned long long)arg1 ;
@end

