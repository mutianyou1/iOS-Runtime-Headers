/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/AVTDiscardableContent.h>

@class UIView, AVTAttributeValueView, NSString;

@interface AVTAttributeCollectionViewCell : UICollectionViewCell <AVTDiscardableContent> {

	/*^block*/id discardableContentHandler;
	UIView* _attributeView;

}

@property (nonatomic,retain) UIView * attributeView;                           //@synthesize attributeView=_attributeView - In the implementation block
@property (nonatomic,readonly) AVTAttributeValueView * valueView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id discardableContentHandler; 
+(id)cellIdentifier;
-(void)prepareForReuse;
-(AVTAttributeValueView *)valueView;
-(void)discardContent;
-(id)discardableContentHandler;
-(void)setDiscardableContentHandler:(id)arg1 ;
-(void)setAttributeView:(UIView *)arg1 ;
-(UIView *)attributeView;
@end

