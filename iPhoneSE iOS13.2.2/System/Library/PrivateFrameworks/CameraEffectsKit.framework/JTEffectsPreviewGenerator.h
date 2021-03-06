/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PVRenderer, NSString;

@interface JTEffectsPreviewGenerator : NSObject {

	PVRenderer* _renderer;
	NSString* _name;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithRendererOptions:(id)arg1 ;
-(void)trackStats:(BOOL)arg1 ;
-(void)_renderJob:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generatePreviewRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)perfLog;
@end

