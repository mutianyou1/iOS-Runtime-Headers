/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface IDSSignInControllerAccountDescription : NSObject {

	NSString* _serviceName;
	NSNumber* _state;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSNumber * state;                    //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id completion;                         //@synthesize completion=_completion - In the implementation block
-(NSNumber *)state;
-(NSString *)serviceName;
-(void)setState:(NSNumber *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setServiceName:(NSString *)arg1 ;
@end
