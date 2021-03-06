/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@protocol CRKIdentitySharingOperationDelegate;
@class NSObject, IDSService, NSDictionary, NSSet;

@interface CRKIdentitySharingOperation : CATOperation {

	NSObject*<CRKIdentitySharingOperationDelegate> _delegate;
	IDSService* _service;
	NSDictionary* _message;
	NSSet* _destinations;

}

@property (nonatomic,readonly) IDSService * service;                                                      //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSDictionary * message;                                                        //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSSet * destinations;                                                      //@synthesize destinations=_destinations - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CRKIdentitySharingOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSObject*<CRKIdentitySharingOperationDelegate>)delegate;
-(void)setDelegate:(NSObject*<CRKIdentitySharingOperationDelegate>)arg1 ;
-(void)main;
-(BOOL)isAsynchronous;
-(NSDictionary *)message;
-(void)setMessage:(NSDictionary *)arg1 ;
-(NSSet *)destinations;
-(IDSService *)service;
-(void)didSendWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithService:(id)arg1 message:(id)arg2 recipients:(id)arg3 ;
@end

