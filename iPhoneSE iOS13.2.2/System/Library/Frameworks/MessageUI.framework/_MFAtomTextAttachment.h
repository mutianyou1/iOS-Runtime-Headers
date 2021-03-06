/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class MFModernComposeRecipientAtom, MFComposeRecipient;

@interface _MFAtomTextAttachment : NSTextAttachment {

	BOOL _isPlaceholder;
	MFModernComposeRecipientAtom* _atomView;

}

@property (assign,nonatomic) BOOL isPlaceholder;                                   //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,retain) MFModernComposeRecipientAtom * atomView;              //@synthesize atomView=_atomView - In the implementation block
@property (nonatomic,readonly) MFComposeRecipient * recipient; 
-(BOOL)isPlaceholder;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(MFComposeRecipient *)recipient;
-(MFModernComposeRecipientAtom *)atomView;
-(id)initWithAtomView:(id)arg1 ;
-(id)attributedStringWithBaseAttributes:(id)arg1 ;
-(void)setAtomView:(MFModernComposeRecipientAtom *)arg1 ;
@end

