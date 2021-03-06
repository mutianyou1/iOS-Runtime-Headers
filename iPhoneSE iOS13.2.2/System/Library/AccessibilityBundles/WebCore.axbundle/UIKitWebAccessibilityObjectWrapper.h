/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/AccessibilityBundles/WebCore.axbundle/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/__UIKitWebAccessibilityObjectWrapper_super.h>

@interface UIKitWebAccessibilityObjectWrapper : __UIKitWebAccessibilityObjectWrapper_super
+(void)initialize;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(BOOL)_isSerializableAccessibilityElement;
+(Class)safeCategoryBaseClass;
-(id)description;
-(CGRect)bounds;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityAttributedValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityContainer;
-(id)accessibilityLanguage;
-(id)accessibilityPath;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityActivate;
-(id)accessibilityCustomActions;
-(id)accessibilityIdentifier;
-(id)accessibilityCustomRotors;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(void)postFocusChangeNotification;
-(void)postSelectedTextChangeNotification;
-(void)postLayoutChangeNotification;
-(void)postLiveRegionChangeNotification;
-(void)postLiveRegionCreatedNotification;
-(void)postChildrenChangedNotification;
-(void)postLoadCompleteNotification;
-(void)postInvalidStatusChangedNotification;
-(void)postValueChangedNotification;
-(void)postExpandedChangedNotification;
-(BOOL)_prepareAccessibilityCall;
-(BOOL)accessibilityCanFuzzyHitTest;
-(id)accessibilityPostProcessHitTest:(CGPoint)arg1 ;
-(unsigned long long)_axLinkTrait;
-(unsigned long long)_axVisitedTrait;
-(unsigned long long)_axHeaderTrait;
-(unsigned long long)_axContainedByListTrait;
-(unsigned long long)_axContainedByTableTrait;
-(unsigned long long)_axContainedByLandmarkTrait;
-(unsigned long long)_axContainedByFieldsetTrait;
-(unsigned long long)_axTextEntryTrait;
-(unsigned long long)_axHasTextCursorTrait;
-(unsigned long long)_axTextOperationsAvailableTrait;
-(unsigned long long)_axSecureTextFieldTrait;
-(unsigned long long)_axSearchFieldTrait;
-(unsigned long long)_axTextAreaTrait;
-(unsigned long long)_axWebContentTrait;
-(unsigned long long)_axImageTrait;
-(unsigned long long)_axTabButtonTrait;
-(unsigned long long)_axButtonTrait;
-(unsigned long long)_axToggleTrait;
-(unsigned long long)_axPopupButtonTrait;
-(unsigned long long)_axRadioButtonTrait;
-(unsigned long long)_axStaticTextTrait;
-(unsigned long long)_axAdjustableTrait;
-(unsigned long long)_axMenuItemTrait;
-(unsigned long long)_axUpdatesFrequentlyTrait;
-(unsigned long long)_axSelectedTrait;
-(unsigned long long)_axNotEnabledTrait;
-(id)ariaLandmarkRoleDescription;
-(void)postScrollStatusChangeNotification;
-(id)_accessibilityWebDocumentView;
-(NSRange)accessibilityRowRange;
-(id)accessibilityPlaceholderValue;
-(id)accessibilityURL;
-(BOOL)_accessibilityScrollToVisible;
-(id)accessibilityLinkRelationshipType;
-(BOOL)accessibilityRequired;
-(id)_accessibilityParentForSubview:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(id)accessibilitySpeechHint;
-(id)accessibilitySortDirection;
-(id)accessibilityMathRootIndexObject;
-(id)accessibilityMathRadicandObject;
-(id)accessibilityMathNumeratorObject;
-(id)accessibilityMathDenominatorObject;
-(id)accessibilityMathBaseObject;
-(id)accessibilityMathSubscriptObject;
-(id)accessibilityMathSuperscriptObject;
-(id)accessibilityMathUnderObject;
-(id)accessibilityMathOverObject;
-(id)accessibilityMathPostscripts;
-(id)accessibilityMathPrescripts;
-(id)accessibilityMathFencedOpenString;
-(id)accessibilityMathFencedCloseString;
-(BOOL)accessibilityIsMathTopObject;
-(id)accessibilityMathType;
-(id)_accessibilityTextViewTextOperationResponder;
-(void)_accessibilityIncreaseSelection:(id)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(unsigned)_accessibilityContextId;
-(id)_accessibilityParentView;
-(BOOL)_accessibilityIsSpeakThisElement;
-(CGRect)_accessibilityVisibleFrame;
-(BOOL)_accessibilityIsFrameOutOfBounds;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityScrollStatus;
-(id)_accessibilityScrollAncestor;
-(id)_accessibilityUserTestingElementBaseType;
-(CGRect)accessibilityFrameForScrolling;
-(BOOL)_accessibilityShouldScrollRemoteParent;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_axAncestorTypes;
-(CGRect)_accessibilityConvertSystemBoundedScreenRectToContextSpace:(CGRect)arg1 ;
-(BOOL)_accessibilityVisiblePointHonorsScreenBounds;
-(BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)arg1 ;
-(NSRange)_accessibilityRangeForTextMarker:(id)arg1 ;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(id)_accessibilityHeaderElementsForRow:(unsigned long long)arg1 ;
-(id)_accessibilityHeaderElementsForColumn:(unsigned long long)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityLineStartMarker:(id)arg1 ;
-(void)_accessibilityMoveSelectionToMarker:(id)arg1 ;
-(id)_accessibilityMarkerForPoint:(CGPoint)arg1 ;
-(id)_accessibilityLineEndMarker:(id)arg1 ;
-(id)_accessibilityNextMarker:(id)arg1 ;
-(id)_accessibilityPreviousMarker:(id)arg1 ;
-(id)accessibilityStringForTextMarkers:(id)arg1 ;
-(id)_accessibilityObjectForTextMarker:(id)arg1 ;
-(CGRect)accessibilityBoundsForTextMarkers:(id)arg1 ;
-(id)accessibilityArrayOfTextForTextMarkers:(id)arg1 ;
-(NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(BOOL)_accessibilitySpeakThisCanBeHighlighted;
-(id)_accessibilityTextRectsForSpeakThisStringRange:(NSRange)arg1 string:(id)arg2 ;
-(CGPoint)_accessibilityScrollRectToVisible:(CGRect)arg1 ;
-(long long)_accessibilityExpandedStatus;
-(BOOL)_accessibilityIsScrollable;
-(BOOL)_accessibilityHasTextOperations;
-(id)_accessibilityDOMAttributes;
-(BOOL)_accessibilitySupportsPressedState;
-(BOOL)_accessibilityIsPressed;
-(id)accessibilityMathEquation;
-(BOOL)_accessibilityShouldSpeakMathEquationTrait;
-(id)_accessibilityCurrentStatus;
-(float)_accessibilityActivationDelay;
-(id)_accessibilityContainerTypes;
-(id)_accessibilityRoleDescription;
-(id)_accessibilityTextMarkerRange;
-(id)_accessibilityTextMarkerRangeForSelection;
-(NSRange)_accessibilitySelectedNSRangeForObject;
-(id)_accessibilityApplication;
-(id)_accessibilityWebAreaURL;
-(id)_accessibilitySpeakThisString;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(id)_accessibilityTextMarkerForPosition:(long long)arg1 ;
-(BOOL)_accessibilitySupportsTextInsertionAndDeletion;
-(BOOL)_accessibilityHandwritingAttributeAcceptsContractedBraille;
-(void)_accessibilityInsertText:(id)arg1 ;
-(BOOL)_accessibilityAlwaysSpeakTableHeaders;
-(void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2 ;
-(void)_accessibilityDecreaseSelection:(id)arg1 ;
-(BOOL)_accessibilityMoveFocusWithHeading:(unsigned long long)arg1 toElementMatchingQuery:(id)arg2 ;
-(BOOL)_axIsWebKit2;
-(id)_accessibilityWebPageObject;
-(id)_axWebKitTrueLinkParent;
-(BOOL)_axWebKitSupportsARIAPressed;
-(BOOL)_axWebKitIsAriaPressed;
-(BOOL)_axWebKitSupportsARIAExpanded;
-(BOOL)_axWebKitIsAriaExpanded;
-(id)_accessibilityMathEquationRootObject;
-(BOOL)_accessibilityIsDataEmpty:(id)arg1 ;
-(id)_accessibilityConvertDataArrayToTextMarkerArray:(id)arg1 ;
-(id)_accessibilityConvertTextMarkersToDataArray:(id)arg1 ;
-(id)_accessibilityMarkerPosition:(BOOL)arg1 withMarker:(id)arg2 ;
-(id)_accessibilityLinePosition:(BOOL)arg1 withMarker:(id)arg2 ;
-(NSRange)_accessibilityRangeForTextMarkers:(id)arg1 ;
-(BOOL)_axIsWK2DataDetectorLink;
-(BOOL)_axIsInteractiveVideo;
-(id)_accessibilityWebPageParent;
-(BOOL)_isIBooks;
-(void)_axBuildAXTreeFromElement:(id)arg1 outArray:(id)arg2 ;
-(BOOL)_accessibilityIsScrollDivDescendent;
-(NSRange)_accessibilityCheckRowRangeForTrait:(unsigned long long)arg1 ;
-(id)_accessibilityAttributedValueForElement;
-(id)_accessibilityAttributedValue:(id)arg1 ;
-(id)_accessibilityColorDescription;
-(BOOL)_accessibilityHasOtherAccessibleChildElements:(id)arg1 ;
-(id)_accessibilityParentLinkContainer;
-(id)_accessibilityProcessRootEquation;
-(void)_axVideoToggleMute;
-(void)_axVideoEnterFullscreen;
-(id)_misspelledWordRotor;
-(id)_axWebKitSearchKeyForCustomRotorType:(long long)arg1 ;
-(BOOL)_accessibilityIsTopMostWebElement;
-(id)_accessibilityCustomRotor:(long long)arg1 ;
-(void)_accessibilityModifySelection:(id)arg1 increase:(BOOL)arg2 ;
-(id)_accessibilityMakeScrollStatus:(CGRect)arg1 scrollPosition:(CGPoint)arg2 contentSize:(CGSize)arg3 ;
-(void)_performPostScrollStatus:(id)arg1 ;
-(void)_performLiveRegionUpdate;
-(void)_repostWebSelectionChange;
-(void)_repostWebNotificaton:(id)arg1 ;
-(BOOL)_axHasMultipleAccessibleChildren:(long long*)arg1 ;
-(void)_repostFocusChangeNotification;
-(id)_accessibilityNextElementsWithHeading:(unsigned long long)arg1 queryString:(id)arg2 ;
-(id)_axWebAreaURL;
-(void)_axSetWebAreaURL:(id)arg1 ;
-(BOOL)_accessibilityRequiresContextIdConversion;
-(BOOL)_isCheckBox;
-(id)_accessibilityValueForHandwriting;
-(NSRange)_accessibilitySelectedTextRangeForHandwritingWithValue:(id)arg1 ;
-(void)postScreenChangeNotification;
-(BOOL)isScreenReaderRunning;
-(id)screenReaderVersion;
@end

