/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DOMNode;

@interface _MFMailDOMEnumerator : NSObject {

	DOMNode* _leftParent;
	DOMNode* _leftNode;
	DOMNode* _rightParent;
	DOMNode* _rightNode;
	DOMNode* _ancestor;
	unsigned _where : 2;
	unsigned _parentIncluded : 1;

}
-(id)next;
-(id)initWithLeftParent:(id)arg1 leftNextSibling:(id)arg2 rightParent:(id)arg3 rightNextSibling:(id)arg4 ;
@end

