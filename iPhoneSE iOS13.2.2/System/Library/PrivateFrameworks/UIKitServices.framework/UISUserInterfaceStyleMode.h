/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UISUserInterfaceStyleModeDelegate;
#import <UIKitServices/UIKitServices-Structs.h>
@interface UISUserInterfaceStyleMode : NSObject {

	id<UISUserInterfaceStyleModeDelegate> _delegate;
	BOOL _observingDefaults;

}

@property (assign,nonatomic) long long modeValue; 
@property (nonatomic,readonly) long long suggestedAutomaticModeValue; 
@property (assign,nonatomic) SCD_Struct_UI0 override; 
@property (assign,nonatomic) SCD_Struct_UI1 customSchedule; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setModeValue:(long long)arg1 ;
-(void)setOverride:(SCD_Struct_UI0)arg1 ;
-(long long)modeValue;
-(SCD_Struct_UI0)override;
-(SCD_Struct_UI1)customSchedule;
-(void)_setOverride:(SCD_Struct_UI0)arg1 force:(BOOL)arg2 ;
-(id)_commonAnalyticsEventDictionary;
-(long long)suggestedAutomaticModeValue;
-(void)setCustomSchedule:(SCD_Struct_UI1)arg1 ;
@end

