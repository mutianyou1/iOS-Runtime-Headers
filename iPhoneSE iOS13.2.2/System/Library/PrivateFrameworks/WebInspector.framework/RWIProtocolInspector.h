/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@class RWIProtocolConfiguration;

@interface RWIProtocolInspector : NSObject {

	AugmentableInspectorController* _inspectorController;
	RetainPtr<RWIProtocolConfiguration>* _configuration;
	unique_ptr<RWIAugmentableInspectorControllerClient, std::__1::default_delete<RWIAugmentableInspectorControllerClient> >* _inspectorControllerClient;

}

@property (nonatomic,readonly) RWIProtocolConfiguration * configuration; 
@property (nonatomic,readonly) BOOL connected; 
-(void)dealloc;
-(RWIProtocolConfiguration *)configuration;
-(BOOL)connected;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)inspectorControllerDestroyed;
@end
