/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentColorPosterizeFilter.h>

@class NSNumber;

@interface OKWidgetContentColorPosterizeFilter : OKWidgetBasicFilter <JSOKWidgetContentColorPosterizeFilter> {

	NSNumber* _inputLevels;

}

@property (nonatomic,retain) NSNumber * inputLevels;              //@synthesize inputLevels=_inputLevels - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputLevels:(id)arg1 ;
-(id)outputImage;
-(NSNumber *)inputLevels;
-(void)setInputLevels:(NSNumber *)arg1 ;
-(id)inputKeys;
-(void)setSettingInputLevels:(id)arg1 ;
@end

