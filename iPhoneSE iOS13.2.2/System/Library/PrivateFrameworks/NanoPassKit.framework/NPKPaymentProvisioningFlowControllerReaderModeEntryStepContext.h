/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSString, NSArray, PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerReaderModeEntryStepContext : NPKPaymentProvisioningFlowStepContext {

	NSString* _title;
	NSString* _subtitle;
	NSArray* _setupFields;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSArray * setupFields;                        //@synthesize setupFields=_setupFields - In the implementation block
@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
-(id)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(NSArray *)setupFields;
-(void)setSetupFields:(NSArray *)arg1 ;
@end

