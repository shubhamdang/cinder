.. _cinder-nexenta5:

.. list-table:: Description of NexentaStor 5 driver configuration options
   :header-rows: 1
   :class: config-ref-table

   * - Configuration option = Default value
     - Description
   * - **[DEFAULT]**
     -
   * - ``nexenta_dataset_compression`` = ``on``
     - (String) Compression value for new ZFS folders.
   * - ``nexenta_dataset_dedup`` = ``off``
     - (String) Deduplication value for new ZFS folders.
   * - ``nexenta_dataset_description`` =
     - (String) Human-readable description for the folder.
   * - ``nexenta_host`` =
     - (String) IP address of Nexenta SA
   * - ``nexenta_iscsi_target_portal_port`` = ``3260``
     - (Integer) Nexenta target portal port
   * - ``nexenta_mount_point_base`` = ``$state_path/mnt``
     - (String) Base directory that contains NFS share mount points
   * - ``nexenta_ns5_blocksize`` = ``32``
     - (Integer) Block size for datasets
   * - ``nexenta_rest_port`` = ``0``
     - (Integer) HTTP(S) port to connect to Nexenta REST API server. If it is equal zero, 8443 for HTTPS and 8080 for HTTP is used
   * - ``nexenta_rest_protocol`` = ``auto``
     - (String) Use http or https for REST connection (default auto)
   * - ``nexenta_sparse`` = ``False``
     - (Boolean) Enables or disables the creation of sparse datasets
   * - ``nexenta_sparsed_volumes`` = ``True``
     - (Boolean) Enables or disables the creation of volumes as sparsed files that take no space. If disabled (False), volume is created as a regular file, which takes a long time.
   * - ``nexenta_use_https`` = ``True``
     - (Boolean) Use secure HTTP for REST connection (default True)
   * - ``nexenta_user`` = ``admin``
     - (String) User name to connect to Nexenta SA
   * - ``nexenta_volume`` = ``cinder``
     - (String) SA Pool that holds all volumes
   * - ``nexenta_volume_group`` = ``iscsi``
     - (String) Volume group for ns5
