/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.7 $ of : mfd-data-access.m2c,v $
 *
 * $Id$
 */
#ifndef INETCIDRROUTETABLE_DATA_ACCESS_H
#define INETCIDRROUTETABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     *********************************************************************
     * function declarations
     */

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table inetCidrRouteTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * inetCidrRouteTable is subid 7 of ipForward.
     * It's status is Current.
     * OID: .1.3.6.1.2.1.4.24.7, length: 9
     */


    int            
        inetCidrRouteTable_init_data(inetCidrRouteTable_registration_ptr
                                     inetCidrRouteTable_reg);


    void            inetCidrRouteTable_container_init(netsnmp_container **
                                                      container_ptr_ptr,
                                                      netsnmp_cache *
                                                      cache);
    int             inetCidrRouteTable_cache_load(netsnmp_container *
                                                  container);
    void            inetCidrRouteTable_cache_free(netsnmp_container *
                                                  container);



#ifdef __cplusplus
};
#endif

#endif                          /* INETCIDRROUTETABLE_DATA_ACCESS_H */
