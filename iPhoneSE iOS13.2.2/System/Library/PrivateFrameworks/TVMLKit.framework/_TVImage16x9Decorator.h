/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageScaleDecorator.h>

@class NSString;

@interface _TVImage16x9Decorator : TVImageScaleDecorator {

	NSString* _inlineTitle;

}

@property (nonatomic,copy) NSString * inlineTitle;              //@synthesize inlineTitle=_inlineTitle - In the implementation block
-(id)decoratorIdentifier;
-(id)decorate:(id)arg1 scaledWithSize:(CGSize)arg2 croppedToFit:(BOOL)arg3 ;
-(id)initWithInlineTitle:(id)arg1 ;
-(NSString *)inlineTitle;
-(void)setInlineTitle:(NSString *)arg1 ;
@end

