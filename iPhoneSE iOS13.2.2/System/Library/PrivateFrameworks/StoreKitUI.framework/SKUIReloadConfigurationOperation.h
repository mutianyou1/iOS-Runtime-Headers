/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, SSURLBag;

@interface SKUIReloadConfigurationOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _outputBlock;
	SSURLBag* _urlBag;

}

@property (retain) SSURLBag * URLBag; 
@property (copy) id outputBlock; 
+(id)cachePath;
-(id)init;
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(SSURLBag *)URLBag;
-(void)setURLBag:(SSURLBag *)arg1 ;
@end

