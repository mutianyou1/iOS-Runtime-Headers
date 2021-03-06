/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

@interface TLKIconsView : TLKStackView {

	NSMutableArray* _imageViews;
	unsigned long long _prominence;

}

@property (nonatomic,retain) NSMutableArray * imageViews;                //@synthesize imageViews=_imageViews - In the implementation block
@property (assign,nonatomic) unsigned long long prominence;              //@synthesize prominence=_prominence - In the implementation block
-(id)init;
-(void)setImageViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageViews;
-(unsigned long long)prominence;
-(void)setProminence:(unsigned long long)arg1 ;
-(void)updateIcons:(id)arg1 ;
@end

