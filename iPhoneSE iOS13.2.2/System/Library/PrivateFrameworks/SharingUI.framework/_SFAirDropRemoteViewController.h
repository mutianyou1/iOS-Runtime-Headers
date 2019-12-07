/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SFAirDropViewServiceHostProtocol.h>

@protocol SFAirDropViewServiceHostProtocol;
@class NSString;

@interface _SFAirDropRemoteViewController : _UIRemoteViewController <SFAirDropViewServiceHostProtocol> {

	id<SFAirDropViewServiceHostProtocol> _airDropHost;

}

@property (assign,nonatomic,__weak) id<SFAirDropViewServiceHostProtocol> airDropHost;              //@synthesize airDropHost=_airDropHost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)airDropViewServiceDidSuccessfullyStartTransfer;
-(void)airDropViewServiceDidSuccessfullyCompleteTransfer;
-(void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)airDropViewServiceDidRequestDismissal;
-(void)setAirDropHost:(id<SFAirDropViewServiceHostProtocol>)arg1 ;
-(id<SFAirDropViewServiceHostProtocol>)airDropHost;
-(id)airDropExtensionService;
@end
