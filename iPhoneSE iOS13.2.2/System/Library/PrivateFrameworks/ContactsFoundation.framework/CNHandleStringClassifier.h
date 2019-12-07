/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CNHandleStringClassificationStrategy;
@interface CNHandleStringClassifier : NSObject {

	id<_CNHandleStringClassificationStrategy> _classificationStrategy;

}

@property (nonatomic,readonly) id<_CNHandleStringClassificationStrategy> classificationStrategy;              //@synthesize classificationStrategy=_classificationStrategy - In the implementation block
+(id)classificationOfHandleStrings:(id)arg1 ;
+(id)classificationOfHandleStrings:(id)arg1 classificationQuality:(unsigned long long)arg2 ;
+(id)classificationStrategyForQuality:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(id)initWithClassificationQuality:(unsigned long long)arg1 ;
-(void)classifyHandleString:(id)arg1 builder:(id)arg2 ;
-(id)initWithClassificationStrategy:(id)arg1 ;
-(unsigned long long)typeOfHandleString:(id)arg1 ;
-(id<_CNHandleStringClassificationStrategy>)classificationStrategy;
@end
