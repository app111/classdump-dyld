/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:03:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITableViewCellAccessibility_super.h>

@interface UITableViewCellAccessibility : UITableViewCellAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)_initializeSafeCategoryFromValidationManager;
-(BOOL)_accessibilityTableViewCellSubclassShouldExist;
-(id)_accessibilityChildren;
-(BOOL)_accessibilityAlwaysReturnsChild;
-(BOOL)_accessibilityIgnoreInternalLabels;
-(id)_accessibilityTableViewSwitch;
-(id)_accessibilityInternalData;
-(void)_accessibilityClearChildren;
-(CGRect)tableTextAccessibleFrame:(id)arg1 ;
-(id)_accessibilityRetrieveTableViewIvarsText;
-(id)tableTextAccessibleLabel:(id)arg1 ;
-(id)_accessibilityIndexPath;
-(id)_accessibilitySubviewsForAdding;
-(void)registerMockChild:(id)arg1 ;
-(BOOL)_accessibilityLabelShouldBeDistinct:(id)arg1 ;
-(void)unregisterMockChild:(id)arg1 ;
-(void)_accessibilitySwitchMockView:(id)arg1 toParent:(id)arg2 withPossibleSubviews:(id)arg3 ;
-(BOOL)_accessibilityIsRemoveControlVisible;
-(BOOL)_accessibilityIsRemoveConfirmVisible;
-(void)_accessibilityHandleRemoveSwitch;
-(void)_accessibilityHandleRemoveConfirm;
-(void)_accessibilityReevaluateChildren;
-(id)_accessibilityRetrieveTableViewCellText;
-(BOOL)_accessibilityUsesOverrideContainerProtocol;
-(id)_accessibilityContainerElements;
-(id)_accessibilityOverrideChildren;
-(BOOL)_axSubviewIgnoredDueToHiddenAncestry:(id)arg1 ;
-(void)_accessibilityUpdateRemoveControl;
-(BOOL)_accessibilityPerformSwipeAccessory;
-(BOOL)_accessibilityDeleteTableViewCell;
-(void)_setAccessibilityMockParent:(id)arg1 ;
-(void)_accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2 ;
-(id)_accessibilityTextElementText;
-(id)_accessibilityMockParent;
-(void)dealloc;
-(id)accessibilityLabel;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setShowingDeleteConfirmation:(BOOL)arg1 ;
-(void)setShowingDeleteConfirmation:(BOOL)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_beginSwiping;
-(void)didTransitionToState:(unsigned)arg1 ;
-(void)setAccessoryView:(id)arg1 ;
-(void)editControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasCancelled:(id)arg1 ;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityElementIsFocused;
-(BOOL)accessibilityActivate;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityIsDescendantOfElement:(id)arg1 ;
-(BOOL)_accessibilityIsInTableCell;
-(BOOL)_accessibilityIsTableCell;
-(id)accessibilityCustomActions;
-(float)_accessibilityAllowedGeometryOverlap;
-(BOOL)_accessibilityCanDeleteTableViewCell;
-(BOOL)accessibilityPerformCustomAction:(int)arg1 ;
-(id)_accessibilityScannerGroupElements;
-(NSRange)accessibilityRowRange;
@end
