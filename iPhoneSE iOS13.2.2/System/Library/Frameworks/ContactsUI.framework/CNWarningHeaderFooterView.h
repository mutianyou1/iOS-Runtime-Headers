/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactTableViewHeaderFooterView.h>

@class NSString;

@interface CNWarningHeaderFooterView : CNContactTableViewHeaderFooterView {

	BOOL _shouldDisplayWarningIcon;
	NSString* _warningText;

}

@property (assign,nonatomic) BOOL shouldDisplayWarningIcon;              //@synthesize shouldDisplayWarningIcon=_shouldDisplayWarningIcon - In the implementation block
@property (nonatomic,retain) NSString * warningText;                     //@synthesize warningText=_warningText - In the implementation block
+(id)exclamationMark;
-(void)prepareForReuse;
-(NSString *)warningText;
-(id)warningAttributedText;
-(void)setWarningText:(NSString *)arg1 ;
-(BOOL)shouldDisplayWarningIcon;
-(void)setShouldDisplayWarningIcon:(BOOL)arg1 ;
@end

