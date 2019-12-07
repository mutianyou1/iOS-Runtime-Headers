/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MSIdleAutosaveItem : NSObject <NSSecureCoding> {

	NSString* _autosaveIdentifier;
	NSString* _subject;

}

@property (nonatomic,copy,readonly) NSString * autosaveIdentifier;              //@synthesize autosaveIdentifier=_autosaveIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * subject;                         //@synthesize subject=_subject - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)withAutosaveIdentifier:(id)arg1 subject:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)subject;
-(NSString *)autosaveIdentifier;
-(id)initWithAutosaveIdentifier:(id)arg1 subject:(id)arg2 ;
@end
