/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSArray;

@interface BRShareLookupParticipantsOperation : BROperation {

	NSArray* _userIdentities;
	/*^block*/id _lookupParticipantsCompletionBlock;

}

@property (copy) id lookupParticipantsCompletionBlock;              //@synthesize lookupParticipantsCompletionBlock=_lookupParticipantsCompletionBlock - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)lookupParticipantsCompletionBlock;
-(void)setLookupParticipantsCompletionBlock:(id)arg1 ;
-(id)initWithUserIdentities:(id)arg1 ;
@end

