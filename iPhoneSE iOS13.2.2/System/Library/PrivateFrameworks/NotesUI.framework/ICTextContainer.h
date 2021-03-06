/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIFoundation/NSTextContainer.h>

@interface ICTextContainer : NSTextContainer {

	BOOL _inPreviewMode;

}

@property (assign,nonatomic) BOOL inPreviewMode;              //@synthesize inPreviewMode=_inPreviewMode - In the implementation block
-(BOOL)isSimpleRectangularTextContainer;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(CGRect*)arg4 ;
-(void)setInPreviewMode:(BOOL)arg1 ;
-(BOOL)inPreviewMode;
@end

