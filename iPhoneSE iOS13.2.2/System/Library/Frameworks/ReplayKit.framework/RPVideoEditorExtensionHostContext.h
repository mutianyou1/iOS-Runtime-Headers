/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/RPVideoEditorExtensionHostProtocol.h>

@class RPVideoEditorHostViewController;

@interface RPVideoEditorExtensionHostContext : NSExtensionContext <RPVideoEditorExtensionHostProtocol> {

	RPVideoEditorHostViewController* _hostViewController;

}

@property (assign,nonatomic,__weak) RPVideoEditorHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setHostViewController:(RPVideoEditorHostViewController *)arg1 ;
-(RPVideoEditorHostViewController *)hostViewController;
-(id)extensionObjectProxy;
-(oneway void)extensionDidFinishWithActivityTypes:(id)arg1 ;
@end

