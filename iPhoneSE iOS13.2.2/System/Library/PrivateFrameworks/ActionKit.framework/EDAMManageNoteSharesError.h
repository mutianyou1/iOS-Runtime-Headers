/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, EDAMUserException, EDAMNotFoundException;

@interface EDAMManageNoteSharesError : FATObject {

	NSNumber* _identityID;
	NSNumber* _userID;
	EDAMUserException* _userException;
	EDAMNotFoundException* _notFoundException;

}

@property (nonatomic,retain) NSNumber * identityID;                                  //@synthesize identityID=_identityID - In the implementation block
@property (nonatomic,retain) NSNumber * userID;                                      //@synthesize userID=_userID - In the implementation block
@property (nonatomic,retain) EDAMUserException * userException;                      //@synthesize userException=_userException - In the implementation block
@property (nonatomic,retain) EDAMNotFoundException * notFoundException;              //@synthesize notFoundException=_notFoundException - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)userID;
-(void)setUserID:(NSNumber *)arg1 ;
-(EDAMUserException *)userException;
-(void)setUserException:(EDAMUserException *)arg1 ;
-(EDAMNotFoundException *)notFoundException;
-(void)setNotFoundException:(EDAMNotFoundException *)arg1 ;
-(NSNumber *)identityID;
-(void)setIdentityID:(NSNumber *)arg1 ;
@end

