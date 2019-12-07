/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDiscoveryShelfView.h>

@class UILabel, PKDiscoveryTextBlockShelf, NSAttributedString;

@interface PKDiscoveryTextBlockShelfView : PKDiscoveryShelfView {

	UILabel* _bodyLabel;
	PKDiscoveryTextBlockShelf* _shelf;
	NSAttributedString* _attributedText;

}
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithShelf:(id)arg1 ;
-(id)_attributedStringForBody:(id)arg1 lede:(id)arg2 headerline:(id)arg3 ;
-(id)_uiFontTextStyle;
-(id)_textColorForBody;
-(id)_textColorForLede;
-(id)_textColorForHeaderline;
@end
