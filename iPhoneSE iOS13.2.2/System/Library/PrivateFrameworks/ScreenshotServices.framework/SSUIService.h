/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSUIServiceClient;

@interface SSUIService : NSObject {

	SSUIServiceClient* _client;

}
-(id)init;
-(void)showScreenshotUIForImage:(id)arg1 options:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)showScreenshotUIForImage:(id)arg1 options:(id)arg2 ;
-(void)_runPPTNamed:(id)arg1 ;
@end
