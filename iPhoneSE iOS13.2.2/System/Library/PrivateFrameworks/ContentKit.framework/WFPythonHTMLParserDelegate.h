/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFPythonHTMLParserDelegate <NSObject>
@optional
-(void)parser:(id)arg1 foundComment:(id)arg2;
-(void)parser:(id)arg1 foundStartTag:(id)arg2 attributes:(id)arg3;
-(void)parser:(id)arg1 foundData:(id)arg2;
-(void)parser:(id)arg1 foundEndTag:(id)arg2;
-(void)parser:(id)arg1 foundEntityRef:(id)arg2;
-(void)parser:(id)arg1 foundCharacterRef:(id)arg2;
-(void)parser:(id)arg1 foundDoctypeDeclaration:(id)arg2;
-(void)parser:(id)arg1 foundProcessingInstruction:(id)arg2;
-(void)parser:(id)arg1 foundUnknownDeclaration:(id)arg2;

@end
